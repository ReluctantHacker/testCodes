# Setting systeminfo variables

$Name = hostname;
$Motherboard = Get-WmiObject Win32_BaseBoard;
$CPU = Get-WmiObject Win32_Processor;
$GPU = Get-WmiObject Win32_VideoController;
$RAM = Get-WmiObject Win32_ComputerSystem;
$Ether_IP = Get-NetIPAddress -AddressFamily IPv4 -InterfaceAlias "乙太網路", "Ethernet", "イーサネット" | Select-Object IPAddress;
$WiFi_IP = Get-NetIPAddress -AddressFamily IPv4 -InterfaceAlias "Wi-Fi" | Select-Object IPAddress;
$Disk_Total = Get-WmiObject Win32_LogicalDisk -filter drivetype=3 | Select-Object Size;
$Disk_Remain = Get-WmiObject Win32_LogicalDisk -filter drivetype=3 | Select-Object FreeSpace;
$SerialNumber = Get-WmiObject Win32_Bios | Select SerialNumber;
$WindowsProductName = Get-ItemProperty -Path 'Registry::HKEY_LOCAL_MACHINE\Software\Microsoft\Windows NT\CurrentVersion' | select-object ProductName;
$WindowsDisplayVersion = Get-ItemProperty -Path 'Registry::HKEY_LOCAL_MACHINE\Software\Microsoft\Windows NT\CurrentVersion' | select-object displayversion;
$NetworkDomain = Get-NetConnectionProfile | select-Object Name | ForEach-Object {$_.Name} | Out-String;
$MacAddress = Get-NetAdapter | Select-Object Name, MacAddress | %{$_.MacAddress = $_.MacAddress.Replace('-', ':').ToLower(); $_} | Format-List | Out-String;
$WifiMacAddress = get-netadapter | where-object {$_.name -eq 'Wi-Fi'} | select-object -property MacAddress;
$EthernetState = Get-NetAdapter | Select-Object name, status | Where-Object {($_.Name -Match "乙太網路") -or ($_.Name -Match "Ethernet") -or ($_.Name -Match"イーサネット")} | Select-Object Status | ForEach-Object {$_.Status};
$WiFiState = Get-NetAdapter | Select-Object name, status | Where-Object {$_.name -Match "Wi-Fi"}| Select-Object Status | ForEach-Object {$_.Status};

# Setting all the systeminfo variables as columns for Exporting csv files

$To_File = new-object PSObject -property @{
	'Name' = $Name;
	'Motherboard' = $Motherboard.Product;
	'CPU' = $CPU.Name;
	'Cores' = $CPU.NumberOfCores;
	'GPU' = $GPU.Name;
	'RAM' = "{0:N2}" -f ($RAM.TotalPhysicalMemory/1GB)+" (GB)";
	'Ether_IP' = $Ether_IP.IPAddress;
	'Wifi_IP' = $Wifi_IP.IPAddress;
	'Disk_Total' = "{0:N2}" -f ($Disk_Total.Size);
	'Disk_Remain' = "{0:N2}" -f ($Disk_Remain.FreeSpace);
	'windows_username' = $env:username;
	'Serial_Number' = $SerialNumber.SerialNumber;
	'WindowsProductName' = $WindowsProductName.ProductName;
	'WindowsDisplayVersion' = $WindowsDisplayVersion.DisplayVersion;
	'NetworkDomain' = $NetworkDomain;
	'MacAddress' = $MacAddress;
	'SystemInfoUUID' = "DefaultUUID";
	'WifiMacAddress' = $WifiMacAddress.MacAddress;
	'EthernetState' = $EthernetState;
	'WiFiState' = $WiFiState };


# Exporting the systeminfo columns need to export

$To_File | Select-Object Name, Motherboard, CPU, Cores, GPU, RAM, Ether_IP, Wifi_IP, Disk_Total, Disk_Remain, windows_username, Serial_Number, WindowsProductName, WindowsDisplayVersion, NetworkDomain, MacAddress, SystemInfoUUID, WifiMacAddress, EthernetState, WiFiState | Export-csv -Encoding UTF8 -path .\SystemInfo.csv -NoTypeInformation;


# Export installed apps information into csv files
Get-ItemProperty HKLM:\Software\Wow6432Node\Microsoft\Windows\CurrentVersion\Uninstall\*, HKLM:\Software\Microsoft\Windows\CurrentVersion\Uninstall\*, HKCU:\Software\Microsoft\Windows\CurrentVersion\Uninstall\* | Select-Object DisplayName, DisplayVersion, Publisher, @{Name="InstallDate"; Expression={([datetime]::ParseExact($_.InstallDate, 'yyyyMMdd', $null)).toshortdatestring()}}, @{Name = "APPUUID" ; Expression = {"DefaultUUID"}}, DisplayIcon | Where-Object DisplayName -ne -Value $Null | Export-csv -Encoding UTF8 -path .\AppList.csv -NoTypeInformation;


# Export addinational installed apps information csv files
get-appxpackage | Select-Object Name, Version, Publisher, @{Name = "APPUUID" ; Expression = {"DefaultUUID"}} | Where-Object Name -ne -Value $Null | Export-csv -Encoding UTF8 -path .\AppxPackageList.csv -NoTypeInformation ; 


# This comment is a test for github.

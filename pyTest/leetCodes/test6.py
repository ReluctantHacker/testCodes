import requests

def get_most_active_authors(threshold):
    page_number = 1
    result = []

    while True:
        # Make an HTTP GET request to the API
        url = f"https://jsonmock.hackerrank.com/api/article_users?page={page_number}"
        response = requests.get(url)
        data = response.json()

        # Extract relevant information from the API response
        users = data.get('data', [])

        # Filter users based on the threshold value
        active_users = [user['username'] for user in users if user['submission_count'] > threshold]
        result.extend(active_users)

        # Check if there are more pages to retrieve
        if page_number < data['total_pages']:
            page_number += 1
        else:
            break

    return result

# Set the threshold value
threshold_value = 10

# Get the list of most active authors
result_list = get_most_active_authors(threshold_value)

# Print the result
for username in result_list:
    print(username)

<?php
class Foo {
	public static function aStaticMethod() {
		echo "test"."\n"."hahahah"; 
	}

	public function testMethod() {
		echo "This is testMethod.";
	}
}

Foo::aStaticMethod();
'Foo'::aStaticMethod();
'Foo'->testMethod();
?>

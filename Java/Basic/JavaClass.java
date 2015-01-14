/*
 * 	STYLE GUIDELINES
 * 	
 * 	classes : ClassName
 * 	methods : methodName
 * 	constants : CONSTANT_NAME
 * 	
 * 	Each class definition should go in a separate file
 * 	The file name should match the name of the class + .java
 */

public class JavaClass {
	
	public static void main(String[] args) {
		
		OtherJavaClass classInstance = new OtherJavaClass(args[0], args[1], args[2]);
		classInstance.method();
	}
};

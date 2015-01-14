public class OtherJavaClass {
	
	String argOne, argTwo, argThree;
	
	OtherJavaClass() {
	}
	
	OtherJavaClass(String one, String two, String three) {
		
		argOne = one; argTwo = two; argThree = three;
	}
	
	void method() {
		
		System.out.println("JavaClass (" + argOne + " " + argTwo + " " + argThree + " " + ") creates an instance of OtherJavaClass & uses it to call method!");
	}
};

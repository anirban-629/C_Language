Union is user defined datatype similar type structure

In structure it needs it's own storage location but union uses a single shared memory

Here in union we will use one memory which is taking the highest memory...

suppose...

a need 2bytes, b need 3 bytes, c need 3 bytes 

so we will take the 3 bytes beacuse it's the highest..


member access operatior(.)...

e1.id=10;
here e1 is structure and id is the member.....

we have to use the union keyword in the place of struct


structure:																		unions:
		
	struct student{																struct student{																	
		float marks;	/*4 bytes*/												float marks;	/*4 bytes*/
		int id;			/*4 bytes*/												int id;			/*4 bytes*/
	};																			};
	
	here it will take 8 bytes													here it will take 4 bytes and will share that between 2 of the members	
																				here one memory will be taken and one of the member will work if marks
																				work then id will be corrupted and if id works then marks..	


Memory usage: 

union test{
	int a;
	float b;
	char c;
}un;
un.a;
un.b;
un.c;

Here as float is the highset usage memory then it'll take 4 bytes int total union.


struct test{
	int a;
	float b;
	char c;
}st;
st.a;
st.b;
st.c;

Here in case of structure it will take total 4+4+1 =9 bytes.


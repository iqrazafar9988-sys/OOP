class calculater{
	private:
		int num1,num2;
		public:
			calculater(int a,int b){
				num1=a;
				num2=b;
			}
int add(){
	return num1+num2;
}
int sub(){
	return num1-num2;
}
int multi(){
	return num1*num2;
}
int divide(){
	return num1/num2;
}
};


class Solution{
	public:
		vector<int> selfDividingNumbers(int left, int right) {
        
        		vector<int> v;

        		for(int i = left; i <= right ; i++) {

       				 int test_int = i;

        			string test_string = to_string(test_int);

			        stack<int> s1;

        		for( int j=0 ; j < test_string.size() ; j++) {

            			char test_case = test_string[j];
            			int test_case_int = test_case - '0';

            			if(test_case_int == 0) {
                			s1.push(1);
               				 continue;
            			}

            			if(test_int % test_case_int != 0){
                			s1.push(1);
            			}
           			else if(test_int % test_case_int == 0) {
                			s1.push(0);
            			}

        		}


        		int check = 0;

        		while(!s1.empty()) {
            			int temp = s1.top();
            			s1.pop();
           		 	if(temp ==1){
               				 check = 1;
            			}
        		}

        		if(check == 0) {
           			 v.push_back(test_int);
        		}
    	}

        return v;
}

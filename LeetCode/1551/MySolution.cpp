class Solution {
    public :
		int minOperations(int n) {
		
			int sum = 0;

		    for(int i = n / 2 ; i < n ; i++ ) {
				sum += ( 2 * i ) + 1 - n;
		    }

		    return sum;

		}
};

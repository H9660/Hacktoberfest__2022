// Name-Raj kr. Soni
// Github-bugraj
//we can solve this problem with two method :

//Two pointer approach
//STL
//1.Reverse a string using two pointer approach :

void reverseString(vector<char>& s) {

        int end = s.size()-1;
        int start = 0;
		
        while(start <= end) {
            swap( s[start], s[end] );
            start++;
            end--;
        }
    }

//Reverse a string using STL in cpp:
void reverseString(vector<char>& s) {

	sort( s.begin(), s.end() );
	
    }

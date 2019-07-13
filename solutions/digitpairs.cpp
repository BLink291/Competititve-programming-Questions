#include<iostream>

using namespace std;

int bit_score(int n)	{
	int a, b, c, largest, smallest;
	int score;

	a = n%10;	n/=10;
	b = n%10;	n/=10;
	c = n%10;	n/=10;

	largest = (a>b)?a:b;
	largest = (c>largest)?c:largest;
	smallest = (a<b)?a:b;
	smallest = (c<smallest)?c:smallest;

	score = largest*11 + smallest*7;

	score = score % 100;
	return score;
}

int findPairs (int score_array[], int N)	{
	int sig_dig[10], i, pairs = 0, msb;

	for(i=0; i<10; i++)	{
		sig_dig[i] = 0;
	}

	for(i=0; i<N; i=i+2)	{
		msb = score_array[i] / 10;
        for(int j =i+2; j<N; j=j+2){
            if(msb == score_array[j]/10){
                if(sig_dig[msb] < 2)	{
	        		sig_dig[msb]++;
		        }
            }
        }
		
	}
    
    for(i=1; i<N; i=i+2)	{
		msb = score_array[i] / 10;
		for(int j =i+2; j<N; j=j+2){
            if(msb == score_array[j]/10){
                if(sig_dig[msb] < 2)	{
	        		sig_dig[msb]++;
		        }
            }
        }
	}

	for(i=0; i<10; i++)	{
		pairs = pairs + sig_dig[i];
	}

	return pairs;
}


int main()	{

	int N, i;
	int ip_array[501];
	int score_array[501];
	int pairs;
	cin>>N;

	for(i=0; i<N; i++)	{
		cin>>ip_array[i];
	}

	for(i=0; i<N; i++)	{
		score_array[i] = bit_score(ip_array[i]);
	}

	pairs = findPairs(score_array, N);
	cout<<pairs;

	return 0;
}
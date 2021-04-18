double sqrt (int n){
	double guess=1;
	for (int i = 0; i < n; ++i)
	{	
		guess=(guess+(2/guess))/2;
	}
	return guess;
}
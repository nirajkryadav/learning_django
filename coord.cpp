void exploration(){
	int i=1;
	int arrX[100], arrY[100];
	arrX[0]=0;
	arrY[0]=0;
	arrD[100];
	arrD[0]=0;
	int a=1;
	int initial_time=0;
		while (a!=-1){
			int final_time, delta_time, final_theta, theta;
			float x, y;
			a=has_junction();
			forward();// pid code 
			if(a>0)    // FINDING THE COORDINATES
			{   
				theta=fx_imu();
				final_time =millis();
				delta_time=final_time-initial_time;
				arrD[i]=delta_time;
				initial_time=final_time;
				arrX[i]=arrX[i-1]+delta_time*Sin(theta);
				arrY[i]=arrY[i-1]+delta_time*Cos(theta);
				i++;
			}	

		     
		}

}
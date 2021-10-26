#include <stdio.h>
#include <math.h>
main(){
	int a,b;
	printf("nhap vao ngay: ");
	scanf("%d",&a);
	printf("nhap vao thang: ");
	scanf("%d",&b);
    int c = 0;
    int d =0;
    int f = 0;
    int g = 0;
    if (((a>=30)&&(b==4 || b==6 || b==9 || b==11)) || ((a>=29) && (b==2)))
    {
    	printf("Ngay thang chua hop le vui long nhap lai!");
    	if(a<=0|| b<=0 || a>31 || b >12){
        printf("Ngay thang chua hop le vui long nhap lai!");
		}
    }
    else{
        switch(b)
        {
        case 1:
        c = a;
        f = c%7+1;
        if(f > 1){
        	printf("Day la ngay thu %d cua nam va hom day la thu %d",c,f);
		}else{
			printf("Day la ngay thu %d cua nam va hom day la chu nhat");
		}
         break;
        case 2:
        c = a+31;
        f = c%7+1;
        if (a>28){
        	if(f > 1){
        		printf("Day la ngay thu %d cua nam nhuan va hom day la thu %d",c,f);
        	}else{
        		printf("Day la ngay thu %d cua nam nhuan va hom day la chu nhat");
			}
     	}else{
     		if(f > 1){
        		printf("Day la ngay thu %d cua nam khong nhuan va hom day la thu %d",c,f);
        	}else{
        		printf("Day la ngay thu %d cua nam khong nhuan va hom day la chu nhat");
		 }
         break;
    	case 3:
    		if(a>28){
    			c = a + 31 + 29;
    			f = c%7+1;
    			if(f > 1){
        		printf("Day la ngay thu %d cua nam nhuan va hom day la thu %d",c,f);
        		}else{
        		printf("Day la ngay thu %d cua nam nhuan va hom day la chu nhat");
			}}else{
				c = a + 31 + 28;
				f = c%7+1;
    			if(f > 1){
        		printf("Day la ngay thu %d cua nam ko nhuan va hom day la thu %d",c,f);
        		}else{
        		printf("Day la ngay thu %d cua nam ko nhuan va hom day la chu nhat");
			}}break;
		case 4:
			if(a>28){
    			c = a + 31 + 29+31;
    			f = c%7+1;
    			if(f > 1){
        		printf("Day la ngay thu %d cua nam nhuan va hom day la thu %d",c,f);
        		}else{
        		printf("Day la ngay thu %d cua nam nhuan va hom day la chu nhat");
			}}else{
				c = a + 31 + 28+31;
				f = c%7+1;
    			if(f > 1){
        		printf("Day la ngay thu %d cua nam ko nhuan va hom day la thu %d",c,f);
        		}else{
        		printf("Day la ngay thu %d cua nam ko nhuan va hom day la chu nhat");
			}}break;
		case 6:
			if(a>28){
    			c = a + 31 + 29 + 31 + 30;
    			f = c%7+1;
    			if(f > 1){
        		printf("Day la ngay thu %d cua nam nhuan va hom day la thu %d",c,f);
        		}else{
        		printf("Day la ngay thu %d cua nam nhuan va hom day la chu nhat");
			}}else{
				c = a + 31 + 28 + 31 + 30;
				f = c%7+1;
    			if(f > 1){
        		printf("Day la ngay thu %d cua nam ko nhuan va hom day la thu %d",c,f);
        		}else{
        		printf("Day la ngay thu %d cua nam ko nhuan va hom day la chu nhat");
			}}break;
		case 8:
			if(a>28){
    			c = a + 31 + 29 + 31 + 30 + 31;
    			f = c%7+1;
    			if(f > 1){
        		printf("Day la ngay thu %d cua nam nhuan va hom day la thu %d",c,f);
        		}else{
        		printf("Day la ngay thu %d cua nam nhuan va hom day la chu nhat");
			}}else{
				c = a + 31 + 28 + 31 + 30 + 31;
				f = c%7+1;
    			if(f > 1){
        		printf("Day la ngay thu %d cua nam ko nhuan va hom day la thu %d",c,f);
        		}else{
        		printf("Day la ngay thu %d cua nam ko nhuan va hom day la chu nhat");
			}}break;
		case 9:
			if(a>28){
    			c = a + 31 + 29 + 31 + 30 + 31 + 31;
    			f = c%7+1;
    			if(f > 1){
        		printf("Day la ngay thu %d cua nam nhuan va hom day la thu %d",c,f);
        		}else{
        		printf("Day la ngay thu %d cua nam nhuan va hom day la chu nhat");
			}}else{
				c = a + 31 + 28 + 31 + 30 + 31 + 31;
				f = c%7+1;
    			if(f > 1){
        		printf("Day la ngay thu %d cua nam ko nhuan va hom day la thu %d",c,f);
        		}else{
        		printf("Day la ngay thu %d cua nam ko nhuan va hom day la chu nhat");
			}}break;
		case 10:
			if(a>28){
    			c = a + 31 + 29 + 31 + 30 + 31 + 31 + 30;
    			f = c%7+1;
    			if(f > 1){
        		printf("Day la ngay thu %d cua nam nhuan va hom day la thu %d",c,f);
        		}else{
        		printf("Day la ngay thu %d cua nam nhuan va hom day la chu nhat");
			}}else{
				c = a + 31 + 28 + 31 + 30 + 31 + 31 + 30;
				f = c%7+1;
    			if(f > 1){
        		printf("Day la ngay thu %d cua nam ko nhuan va hom day la thu %d",c,f);
        		}else{
        		printf("Day la ngay thu %d cua nam ko nhuan va hom day la chu nhat");
			}}break;
		case 11:
		if(a>28){
    			c = a + 31 + 29 + 31 + 30 + 31 + 31 + 30 + 31;
    			f = c%7+1;
    			if(f > 1){
        		printf("Day la ngay thu %d cua nam nhuan va hom day la thu %d",c,f);
        		}else{
        		printf("Day la ngay thu %d cua nam nhuan va hom day la chu nhat");
			}}else{
				c = a + 31 + 28 + 31 + 30 + 31 + 31 + 30 + 31;
				f = c%7+1;
    			if(f > 1){
        		printf("Day la ngay thu %d cua nam ko nhuan va hom day la thu %d",c,f);
        		}else{
        		printf("Day la ngay thu %d cua nam ko nhuan va hom day la chu nhat");
			}}break;
		case 12:
			if(a>28){
    			c = a + 31 + 29 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
    			f = c%7+1;
    			if(f > 1){
        		printf("Day la ngay thu %d cua nam nhuan va hom day la thu %d",c,f);
        		}else{
        		printf("Day la ngay thu %d cua nam nhuan va hom day la chu nhat");
			}}else{
				c = a + 31 + 28 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
				f = c%7+1;
    			if(f > 1){
        		printf("Day la ngay thu %d cua nam ko nhuan va hom day la thu %d",c,f);
        		}else{
        		printf("Day la ngay thu %d cua nam ko nhuan va hom day la chu nhat");
			}}break;
         }
    }
	}
}

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int btn1(int a)
{
   setcolor(8);
   setfillstyle(1,8);
   rectangle(250+a,150+a,400+a,200+a);          // 1. buton
   floodfill(251+a,151+a,8);
   
   setcolor(6);
   settextstyle(3,0,3);
   outtextxy(290+a,160+a,"BA�LA");
}
int btn2 (int a)
{
	setcolor(8);
   setfillstyle(1,8);
   rectangle(250+a,250+a,400+a,300+a);          // 2. buton
   floodfill(251+a,251+a,8);
   
   setcolor(6);
   settextstyle(3,0,3);
   outtextxy(290+a,260+a,"GE�M��");
}
int btn3( int a)
{
	setcolor(8);
   setfillstyle(1,8);
   rectangle(250+a,350+a,400+a,400+a);          // 3. buton
   floodfill(251+a,351+a,8);
   
   setcolor(6);
   settextstyle(3,0,3);
   outtextxy(280+a,360+a,"HAKKINDA");
  
}
int bslngc(int a)
{
	setcolor(WHITE);
	rectangle(10,10,getmaxx()-10,getmaxy()-10);  // ba�lang�� �ercevesi
    rectangle(11,11,getmaxx()-9,getmaxy()-9);
	rectangle(12,12,getmaxx()-8,getmaxy()-8);  
     
   setcolor(BLUE);
   settextstyle(8,0,4);
   outtextxy(75,50,"K�M M�LYONER OLMAK �STER");  //ba�l�k ismi
}
int soru_sekli(int a)
{
	 //soru grafi�i 
    int i, sayac=0;
	setcolor(BLUE);
    setfillstyle(1,BLUE);
	rectangle(100,50,500,130);       //soru i�in  dikd�rtgen 
	floodfill(101,51,BLUE);
  

    setcolor(15);                     // beyaz renk  
    line(100,51,60,90);                //sol taraftaki
    line(100,131,60,90);                  //��gen 
	line(0,90,60,90); 
	
	line(500,51,550,90);
	line(500,131,550,90);            // sa� taraftaki beyaz �izgili ��gen
	line(550,90,getmaxx(),90);
	
	line(100,51,500,51);             //�st soru kenar�
	line(100,131,500,131);           // alt soru kenar�
	
	// sorunun �st�nde s�reyi belirtmek i�in daireler �eklinde zamanlay�c� ve sorunun �st�ndeki zamanlayac� daireleri boyamak i�in d�ng�
	
}
int siklar(int a,int b, int c, int d)
{
	//A ��kk�
   	setcolor(1+a);
    setfillstyle(1,1+a);
    rectangle(55,250,295,300);
    floodfill(56,251,1+a);
    //CEVAP �IKKINI BEL�RG�NLE�T�REL�M
    setcolor(WHITE); 
    rectangle(56,251,296,301);
    
    //yandan ge�en �izgi
    line(0,275,40,275);
    line(40,275,55,250);        // a ��kk� ba�lang�c� 
    line(40,275,55,300);
   
    //B �IKKI
    setcolor(1+b);
    setfillstyle(1,1+b);
    rectangle(330,250,570,300);
    floodfill(331,251,1+b);
    //CEVAP �IKKINI BEL�RG�NLE�T�REL�M
    setcolor(WHITE);
    rectangle(331,251,571,301);
    
    //yandan ge�en �izgi
    line(295,300,310,275);      //A ��kk� biti�i
    line(295,250,310,275);
	  
    line(310,275,330,250);      // B ��kk� ba�lang�c�
    line(310,275,330,300);
    
    line(570,300,600,275);
    line(570,250,600,275);       // B ��kk� biti�i
    line(600,275,getmaxx(),275);
    
    //C ��kk�
   	setcolor(1+c);
    setfillstyle(1,1+c);
    rectangle(55,350,295,400);
    floodfill(56,351,1+c);
    //CEVAP �IKKINI BEL�RG�NLE�T�REL�M
    setcolor(WHITE); 
    rectangle(56,351,296,401);
    
     //yandan ge�en �izgi
    line(0,375,40,375);
    line(40,375,55,350);        // c ��kk� ba�lang�c� 
    line(40,375,55,400);
    
    //D �IKKI
    setcolor(1+d);
    setfillstyle(1,1+d);
    rectangle(330,350,570,400);
    floodfill(331,351,1+d);
    //CEVAP �IKKINI BEL�RG�NLE�T�REL�M
    setcolor(WHITE);
    rectangle(331,351,571,401);
    
     //yandan ge�en �izgi
    line(295,400,310,375);      //C ��kk� biti�i
    line(295,350,310,375);
	  
    line(310,375,330,350);      // D ��kk� ba�lang�c�
    line(310,375,330,400);
    
    line(570,400,600,375);
    line(570,350,600,375);       // D ��kk� biti�i
    line(600,375,getmaxx(),375);
}
int zaman(int a)
{
	int i, sayac=0,saniye;
	char s[300];
		for(i=0;i<=400;i=i+40)
	{
		sayac++;
		if(sayac<=3)
		{
		
		setfillstyle(1,2);
		circle(100+i,30,7);
		floodfill(100+i, 30, WHITE);
	   }
	   else if(sayac<=5)
	   {
		
		setfillstyle(1,10);
		circle(100+i,30,7);
		floodfill(100+i, 30, WHITE);
	   }
	   else if(sayac<=8)
	   {
		
		setfillstyle(1,6);
		circle(100+i,30,7);
		floodfill(100+i, 30, WHITE);
	   }
	   else if(sayac<=11)
	   {
		
		setfillstyle(1,RED);
		circle(100+i,30,7);
		floodfill(100+i, 30, WHITE);
	   }
	}
	circle(600,40,30);
	saniye=30;
	i=0;
	for(int j=0;j<=30;j++)
	{  
	    delay(250);
	    sprintf(s,"%d",saniye);
	    settextstyle(9,0,1);
	    outtextxy(585,30,s);
	    
	    if(j%3==0)
	    {
	    	
	   	setfillstyle(1, WHITE);
		circle(100+i,30,7);
		floodfill(100+i, 30, WHITE);
		i+=40;
		}
		saniye--;
	}
	
	// say�sal kar��l���n� circle i�inde geriye do�ru yazd�ral�m
}
int sorular(int a)
{
	if(a==1)  //a
	{
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(120,80,"1) Bir yere gitmeyi ifade ederken c�mlenin");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(150,100,"  ba��nda kullan�lan s�z hangisidir ?");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(90,265," A) Ver elini ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(365,265," B) K�r dizini ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(90,365," C) S�k di�ini ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(365,365," D) Yum g�z�n� ");
	}
	else if(a==2)//b
	{
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(150,80,"2)  'Bug�nden sonra gelecek ilk g�n' ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(110,100," anlam�na gelen kelimenin do�ru yaz�l��� nas�ld�r  ?");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(90,265," A) Ya�r�n ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(365,265," B) Yar�n ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(90,365," C) Yaar�n ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(365,365," D) Ya�ar�n ");
	}

	else if(a==3)//d 
	{
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(150,80,"3) �nce kesilmi� d�ner i�in");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(140,100," kullan�lan ifade hangisi olur ?");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(90,265," A) Cam ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(365,265," B) �erceve ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(90,365," C) Ka��t ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(365,365," D) Yaprak ");
	}
	else if(a==4)//c
	{
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(120,80,"4)'Bayg�n bayg�n bakmak' hangi durum");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(140,100," i�in kullan�lan bir s�zd�r ?");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(90,265," A) �a�k�nl�k ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(365,265," B)Tembellik");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(90,365," C) Hayranl�k");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(365,365," D) Pi�manl�k");
	}
	else if(a==5)//d
	{
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(100,80,"5) Yemekten sonra 'Eline Sa�l�k' diyen ki�iye verilen");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(110,100,"cevapta,afiyet ile birlikte hangisi kullan�l�r?");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(90,265," A) Lokum ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(365,265," B) �urup ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(90,365," C) Kaymak ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(365,365," D) �eker ");
	}
	else if(a==6)//b
	{
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(120,80,"6) Bir olay� kutlamak veya e�lenmek i�in ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(140,100,"d�zenlenen ziyafete ne ad verilir?");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(90,265," A) Panay�r ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(365,265," B) ��len ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(90,365," C) Resmi ge�it ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(365,365," D) Panel ");
	}
	else if(a==7)//b
	{
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(150,80,"7) 'Ayn�,bildi�imiz gibi' cevab�n�");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(120,100,"ald�ysan�z sordu�unuz soru hangisidir?");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(90,265," A) �sminiz nedir? ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(365,265," B) Nas�ls�n�z ?");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(90,365," C) Neler al�rd�n�z ? ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(365,365," D) Nerelisiniz ");
	}
	else if(a==8)//a
	{
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(100,80,"8) ��retmen,��rencilerden �icek olmalar�n� istedi�inde");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(110,100,"��renciler hangisini ya�p ses ��karmadan durular?");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(90,265," A)Kollar�n� g���ste ba�lay�p");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(365,265," B)Aya�a kalk�p");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(90,365," C)Ellerini havaya kald�r�p");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(365,365," D)Tek ayak �st�nde durup");
	}
	else if(a==9)//d
	{
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(120,80,"9) Halk aras�nda kullan�lan bir s�ze g�re,");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(130,100," k�t� kom�u insan� ne sahibi yapar ?");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(90,265," A) Karavan ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(365,265," B) D��man ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(90,365," C) Dert ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(365,365," D) Ev ");
	}
	else if(a==10)//b
	{
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(140,80,"10) K�rling,hokey ve paten hangi");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(150,100,"zeminde yap�lan sporlard�r?");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(90,265," A) Buz ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(365,265," B) Tahta ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(90,365," C) �im ");
	
	setcolor(WHITE);
	settextstyle(3,0,1);
	outtextxy(365,365," D) Kum ");
	}
}
int main()
{	
	int  gd=DETECT , gm;
	initgraph(&gd,&gm,(char*)"");
    int i,odul=0;
    
    int x, y,sayac=0;
    int kordx , kordy;
    
    char odulc[50];
    char ad[20],soyad[30];
    bslngc(0);
    btn1(0);
    btn2(0);
    btn3(0);
   
   while(sayac!=1)
   {
   	delay(1000);
   	getmouseclick(WM_LBUTTONDBLCLK,x,y);
   	printf("\n%d,%d",x,y);
   	if(x<400&&y<200)
   	{
   		if(x>250&&y>150)
   		{
   			cleardevice();
   			btn1(2);
   			btn2(0);
   			btn3(0);
   			bslngc(0);
   			delay(50);
   			cleardevice();
   			bslngc(0);
   			btn1(0);
   			btn2(0);
   			btn3(0);
   			cleardevice();
   			
   			FILE *p;
			printf("\n\n\tAdinizi giriniz : ");
   			scanf("%s",ad);
   			printf("\n\tSoyadinizi giriniz :");
   			scanf("%s",soyad);
   			p=fopen("ge�mi�.txt","a");
   			fprintf(p,"\n%s ",ad);
   			fprintf(p,"%s ",soyad);
   			fclose(p);
			soru_sekli(1);
            siklar(0,0,0,0);
            sayac=1;
		   }
	   }
	else  if(x<400&&y<300)
   	{
   		if(x>250&&y>250)
   		{
   			cleardevice();
   			btn1(0);
   			btn2(2);
   			btn3(0);
   			bslngc(0);
   			delay(100);
   			cleardevice();
   			bslngc(0);
   			btn1(0);
   			btn2(0);
   			btn3(0);
   			cleardevice();
   			setcolor(6);
           	rectangle(10,10,getmaxx()-10,getmaxy()-10);
           	FILE *d2;
	        d2=fopen("ge�mi�.txt","r");
	        kordx=50;
           	kordy=50;
         	while(!feof(d2))
	       {
                fscanf(d2,"%s %s %d",ad,soyad,&odul);
       	        strcat(ad," ");
       	        strcat(ad,soyad);
             	setcolor(2);
             	settextstyle(3,0,1);
            	outtextxy(kordx,kordy,ad);
            	kordx+=250;
       	        sprintf(odulc,"%d",odul);
            	outtextxy(kordx,kordy,odulc);
       	        kordy+=20;
       	        kordx=50;
                setcolor(8);
                setfillstyle(1,8);
                rectangle(getmaxx()-170,getmaxy()-70,getmaxx()-20,getmaxy()-20);          
                floodfill((getmaxx()-170)+1,(getmaxy()-70)+1,8);
                setcolor(9);
                settextstyle(3,0,3);
                outtextxy(getmaxx()-150,getmaxy()-60,"GER� D�N");
		   }
	   }
   }
	else  if(x<400&&y<400)
   	{
   		if(x>250&&y>350)
   		{
   			cleardevice();
   			btn1(0);
   			btn2(0);
   			btn3(2);
   			bslngc(0);
            delay(100);
   			cleardevice();
   			bslngc(0);
   			btn1(0);
   			btn2(0);
   			btn3(0);
   			cleardevice();
   			int uz=0;
			i=1;
            char c[50],yazdir[200]=" ";
            FILE *d;
            
            cleardevice();
            setcolor(9);
            rectangle(10,10,getmaxx()-10,getmaxy()-10);
            d=fopen("hakk�nda.txt","r");
   
            kordx=50 , kordy=100;
            while(!feof(d))
            {
            	fscanf(d,"%s",c);
            	strcat(c," ");
            	strcat(yazdir,c);
                delay(50);
          	    if(i%5==0)
   	           {  
	            settextstyle(8,0,1);
   		        outtextxy(kordx,kordy,yazdir);
   	         	kordy+=50;
   	         	uz=0;
   	         	strcpy(yazdir," ");
	           }
            i++;
            setcolor(8);
            setfillstyle(1,8);
            rectangle(getmaxx()-170,getmaxy()-70,getmaxx()-20,getmaxy()-20);          
            floodfill((getmaxx()-170)+1,(getmaxy()-70)+1,8);
            setcolor(9);
            settextstyle(3,0,3);
            outtextxy(getmaxx()-150,getmaxy()-60,"GER� D�N");
           }
	   }
    }
	   else  if(x<getmaxx()-20 && y<getmaxy()-20)
	   {
	   	if(x>getmaxx()-170 && y>getmaxy()-70 )
	   	{

            cleardevice();
            bslngc(0);
   			btn1(0);
   			btn2(0);
   			btn3(0);
		   }
		}
	   }
     
	     //jokerler i�in buton kullanal�m
     i=1;
     sayac=1;
     odul=0;
     while(sayac!=0)
   {
   	
   	soru_sekli(1);
    siklar(0,0,0,0);
    sorular(i);
    zaman(1);
    
   	delay(1000);
   	getmouseclick(WM_LBUTTONDBLCLK,x,y);
   	printf("\n%d,%d",x,y);
   	
 
    if(x<295&&y<300)
    {
    	if(x>55&&y>250)
    	{
    		siklar(5,0,0,0);
    		delay(5000);
    		if(i==1 || i==8)
    		{
    			i++;
    			siklar(1,0,0,0);
    			delay(1000);
			}
			else
    		{
    			siklar(3,0,0,0);
    			sayac=0;
    			delay(1000);
    			cleardevice();
                setcolor(BLUE);
                setfillstyle(1,BLUE);
	            rectangle(100,250,500,330);       
	            floodfill(101,251,BLUE);
	            sprintf(odulc,"%d TL ",odul);
	            setcolor(WHITE);
	            settextstyle(8,0,3);
	            outtextxy(240,280,odulc);
	            delay(3000);
	            
			}
		}
	}
	else if(x<570&&y<300)
    {
    	if(x>330&&y>250)
    	{
    		siklar(0,5,0,0);
    		delay(5000);
    		if(i==2 || i==6 || i==7 || i==10)
    		{
    			i++;
    			siklar(0,1,0,0);
    			delay(500);
			}
			else
    		{
    			siklar(0,3,0,0);
    			sayac=0;
    			delay(1000);
    			cleardevice();
                setcolor(BLUE);
                setfillstyle(1,BLUE);
	            rectangle(100,250,500,330);       
	            floodfill(101,251,BLUE);
	            sprintf(odulc,"%d TL ",odul);
	            setcolor(WHITE);
	           	settextstyle(8,0,3);
	            outtextxy(240,280,odulc);
	            delay(3000);
	            
			}
		}
	}
	else if(x<295&&y<400)
    {
    	if(x>55&&y>350)
    	{
    		siklar(0,0,5,0);
    		delay(5000);
    		if(i==4)
    		{
    			i++;
    			siklar(0,0,1,0);
    			delay(1000);
			}
			else
    		{
    			siklar(0,0,3,0);
    			sayac=0;
    			delay(1000);
    		    cleardevice();
                setcolor(BLUE);
                setfillstyle(1,BLUE);
	            rectangle(100,250,500,330);       
	            floodfill(101,251,BLUE);
	            sprintf(odulc,"%d TL ",odul);
	            setcolor(WHITE);
	            settextstyle(8,0,3);
	            outtextxy(240,280,odulc);
	            delay(3000);
	            
			}
		}
	}
	else if(x<570&&y<400)
    {
    	if(x>330&&y>350)
    	{
    		siklar(0,0,0,5);
    		delay(5000);
    		if(i==3 || i==5 || i==9)
    		{
    			i++;
    			siklar(0,0,0,1);
    			delay(1000);
			}
			else
    		{
    			siklar(0,0,0,3);
    			sayac=0;
    			delay(1000);
    			cleardevice();
                setcolor(BLUE);
                setfillstyle(1,BLUE);
	            rectangle(100,250,500,330);       
	            floodfill(101,251,BLUE);
	            sprintf(odulc,"%d TL ",odul);
	            setcolor(WHITE);
	            settextstyle(8,0,3);
	            outtextxy(240,280,odulc);
	            delay(3000);
	            
			}
		}
	}
	
	if(i==2)
		odul=2000;
	else if(i==3)
	    odul=3000;
	else if(i==4)
	    odul=5000;
	else if(i==5)
	    odul=7500;
	else if(i==6)
	    odul=15000;
	else if(i==7)
	    odul=30000;
	else if(i==8)
	    odul=60000;
	else if(i==9)
	    odul=125000;
	else if(i==10)
	{
		odul=1000000;
		sayac=0;
		cleardevice();
        setcolor(BLUE);
        setfillstyle(1,BLUE);
	    rectangle(100,250,500,330);       
	    floodfill(101,251,BLUE);
	    sprintf(odulc,"%d TL ",odul);
	    setcolor(WHITE);
	    settextstyle(8,0,3);
	    outtextxy(220,280,odulc);
	    delay(3000);
	}						    
	delay(1000);
	cleardevice();
}
    FILE *d1;
    d1=fopen("ge�mi�.txt","a");
    fprintf(d1,"%d",odul);
    fclose(d1);
	getch();
	closegraph();
}


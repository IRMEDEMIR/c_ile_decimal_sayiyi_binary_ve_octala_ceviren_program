#include<stdio.h>
int main()
{
	
	int sayi,kalan,toplam=0,i=1,klon,tercih; 
	do
	{
	
	//ekrana sonucu yazarken en sonda elde ettigimiz 0'i yazmasin, ilk basta girilen sayiyi yazsin diye klon tanimliyoruz
	printf("Donusturulecek olan decimal sayiyi giriniz:");
	scanf("%d",&sayi);
	klon=sayi;
	
	//onlu sayinin ikili sayiya donusumu
	while(sayi!=0)
	{
	    //once kalani bulduralim
		kalan=sayi%2;
		
	    //sonra bolumu bulduralim 
		sayi=sayi/2;

	    //binary karsiligini bulduralim
		toplam=toplam+kalan*i;
		i=i*10;   //kagit uzerinde bulurken sondan basa dogru yazdigimiz icin surekli 10 ile carparak basamak kaydiriyoruz
	}
	
	printf("\n\n%d decimal sayisinin binary hali:%d\n\n" ,klon,toplam);
	
	sayi=klon;
	toplam=0;
	i=1;
	
	//onlu sayinin sekizli sayiya donusumu
	//ikili sayi icin yaptiklarimizin aynilarini yapiyoruz
	while(sayi!=0)
	{
		kalan=sayi%8;
	
		sayi=sayi/8;

		toplam=toplam+kalan*i;
		i=i*10;  
	}
	
	printf("%d decimal sayisinin octal hali:%d\n\n" ,klon,toplam);
	
	sayi=klon;
	toplam=0;
	i=1;


    printf("Isleme devam etmek istiyorsaniz 1'e ; istemiyorsaniz 0'a basiniz.Tercih:\n");
    scanf("%d",&tercih);

    }
    
    while(tercih==1);
    printf("isleminiz sona erdi..");
    
return 0;

}





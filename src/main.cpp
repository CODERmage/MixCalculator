//Mix Calculator Version 2.0
//15 Subat 2010
#include <QtCore/QCoreApplication>
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    system("color 02");
    cout<<" --------------------------------------------"<<endl;
    cout<<"|       ~ Cmage Mix Calculator v2.0 ~        |"<<endl;
    cout<<"|              ~ 15.02.2010 ~                |"<<endl;
    cout<<"|              ~ TURK Guild ~                |"<<endl;
    cout<<" --------------------------------------------"<<endl<<endl;
UrunSecim:
    int xUrunSecim;
    cout<<"********************************************"<<endl;
    cout<<"     Hangi urunu uretmek istiyorsunuz?"<<endl<<endl;
    cout<<"********************************************"<<endl;
    cout<<"*     Fire Essence icin  :  1'e basiniz    *"<<endl;
    cout<<"*   Health Essence icin  :  2'ye basiniz   *"<<endl;
    cout<<"********************************************"<<endl;
    cin>>xUrunSecim;

    if (xUrunSecim==1)
{
    float xBag,xHarici,xFe,xRawMeat,xIng,xIngTop;
    int xSonuc,xKullanilacakYemek;
    system("CLS");
    cout<<"**********************************************************"<<endl;
    cout<<"*    Lutfen Cantanizin Tasima Kapasitesiniz Yaziniz..    *"<<endl;
    cout<<"**********************************************************"<<endl;
    cin>>xBag;

    system("CLS");
    cout<<"****************************************************************************"<<endl;
    cout<<"* Cantanizda Bulunan Harici Malzemelerin(Kiyafet,COL vs..) Kapladigi Alan? *"<<endl;
    cout<<"****************************************************************************"<<endl;
    cin>>xHarici;
    xFe=1;
    xRawMeat=0.04;
    xIng=4;
    xIngTop=xIng+xRawMeat;
    xSonuc=(xBag/xIngTop)-xHarici-xFe;
    xKullanilacakYemek=xRawMeat*xSonuc+1.5;
    system("CLS");
    cout<<"****************************************************************"<<endl;
    cout<<"Cantanizla Bir Seferde "<<xSonuc<<" tane FE Yapabilirsiniz."<<endl;
    cout<<"NOT: "<<xKullanilacakYemek<<" adet raw meat kullanmalisiniz."<<endl;
    cout<<"****************************************************************"<<endl;
}
    else if(xUrunSecim==2)
    {
        float xBag,xHarici,xHe,xBones,xIng,xIngTop;
        int xSonuc,xKullanilacakYemek;
        system("CLS");
        cout<<"**********************************************************"<<endl;
        cout<<"*    Lutfen Cantanizin Tasima Kapasitesiniz Yaziniz..    *"<<endl;
        cout<<"**********************************************************"<<endl;
        cin>>xBag;

        system("CLS");
        cout<<"****************************************************************************"<<endl;
        cout<<"* Cantanizda Bulunan Harici Malzemelerin(Kiyafet,COL vs..) Kapladigi Alan? *"<<endl;
        cout<<"****************************************************************************"<<endl;
        cin>>xHarici;
        xHe=1;
        xBones=0.8;
        xIng=5;
        xIngTop=xIng+xBones;

        xSonuc=(xBag/xIngTop)-xHarici-xHe;
        xKullanilacakYemek=(xBones*xSonuc)+1.5;
        system("CLS");
        cout<<"****************************************************************"<<endl;
        cout<<"Cantanizla Bir Seferde "<<xSonuc<<" tane HE Yapabilirsiniz."<<endl;
        cout<<"NOT: "<<xKullanilacakYemek<<" adet Bones kullanmalisiniz."<<endl;
        cout<<"****************************************************************"<<endl;
    }
    else
    {
    system("CLS");
    cout<<"     Lutfen Gecerli Bir Cevap Veriniz."<<endl<<endl<<endl;
    goto UrunSecim;
    }
    
    
    QCoreApplication a(argc, argv);

    return a.exec();
}

# Kod Hızı Ölçer

'chrono' kütüphanesini inceleyeceğiz.

## Amaç Nedir?

### chrono Kütüphanesi: Zaman Ölçümü ve Performans Analizi

C++'ta performans analizi ve zaman ölçümü kritik öneme sahiptir. Bu amaçla kullanılan chrono kütüphanesi, zaman ölçümü ve yönetimi için güçlü araçlar sunar.

*__chrono Kütüphanesi Nedir?__*

chrono, C++'ta zamanla ilgili işlemler için kullanılan bir kütüphanedir. Farklı zaman birimlerini (saniye, milisaniye, mikrosaniye, nanosekonde, vb.) ve zaman noktalarını temsil eder. Yüksek çözünürlüklü zaman ölçümleri yaparak performans analizi için ideal bir araçtır.

*__Kullanım Alanları__*

+ Performans Ölçümleri: Kod parçalarının çalışma sürelerini ölçer ve optimizasyon için kritik veriler sağlar.
- Zamanlayıcılar ve Gecikmeler: Programlarda belirli bir süre beklemek veya zamanlayıcılar oluşturmak için kullanılır.
* Zaman Damgaları: Olayların veya işlemlerin zaman damgalarını almak için kullanılır.

## Programlamada Nasıl Kullanacağımızı İki Örnek ile İnceleyelim:
![image](https://github.com/isleyen/simpleProjects/assets/136992260/f64e875a-2250-4f99-8320-202e591c923f)

İlk olarak chrono kütüphanemizi tanımlayalım ve bunun üzerinden işlemlerimizi gerçekleştirelim.

![image](https://github.com/isleyen/simpleProjects/assets/136992260/11691b0a-93b2-425f-aa26-dfb6ffdc0926)

![image](https://github.com/isleyen/simpleProjects/assets/136992260/525c60a0-0d26-4dd8-9821-f1a28ac89081)

İki adet fonksiyonum var ve bunlar bana aynı işlemi yapıyor fakat farklı yollardan. Bilerek biri hızlı yoldan diğeri de yavaş yoldan yapıyor.

Şimdi asıl önemli olan kısma geçelim:

![image](https://github.com/isleyen/simpleProjects/assets/136992260/236a1da2-ccfd-40cb-8f19-e173070b9059)

### Adım adım inceleyelim:
![image](https://github.com/isleyen/simpleProjects/assets/136992260/aad41a97-d77c-446c-b1c3-fc86ae4add19)

auto start: başlanıgç saatini kaydeder.

auto end: bitiş saatini kaydeder.

Sonra da end-start yaparak ortaya süre çıkar. Bu sürenin daha okunaklı olabilmesi için milisaniyeye çeviriyorum. Son olarak da ekrana bastırıyorum.

Aynı işlem hızlı olan fonksiyonum için de geçerli:

![image](https://github.com/isleyen/simpleProjects/assets/136992260/c62a1b06-da48-4d6f-80d2-f48192304e49)

## Hazır Kodlar:

### Kodunuzda *__using namespace std;__* tanımlarsanız:

auto start = chrono::high_resolution_clock::now();

//ölçmek istediğiniz aralık

auto end = chrono::high_resolution_clock::now();

end-start ile süre hesaplamasınin sonucu: chrono::duration<double> degiskenAdi = end - start;

Okunaklı sayı değerine çevirme işlemi(isteğe bağlı): double milliseconds = degiskenAdi.count() * 1000;

Ekrana Yazdirma: cout << "Slow sum took " << milliseconds << " seconds." << endl;

### Kodunuzda *__using namespace std;__* tanımlamazsanız:

auto start = std::chrono::high_resolution_clock::now();

// hesaplanacak aralık

auto end = std::chrono::high_resolution_clock::now();

end-start ile süre hesaplamasınin sonucu: std::chrono::duration<double> degiskenAdi = end - start;

Okunaklı sayı değerine çevirme işlemi(isteğe bağlı):  double milliseconds = degiskenAdi.count() * 1000;

Ekrana Yazdırma:  std::cout << "Slow sum took " << slowDuration.count() << " milliseconds" << std::endl;

> [!WARNING]
> Fonskiyon içerisinde birden fazla hız ölçüm değeri yapacaksanız *auto* tanımalamasını bir defa kullanın.

Hedef Dosya: codeSpeedMeter.cpp

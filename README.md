# lab3
compile question a:
>>make

the result of question:
>size=1000

sort():0seconds
v1/v2 aredifferent.
insertion_sort():0.01seconds
v1/v2 are the same.

>size=10000

sort():0seconds
v1/v2 aredifferent.
insertion_sort():1.28seconds
v1/v2 are the same.

>size=100000

sort():0.04seconds
v1/v2 aredifferent.
insertion_sort():128.17seconds
v1/v2 are the same.

>size=1000000

sort():0.51seconds
v1/v2 aredifferent.
insertion_sort():(???)<---跑太久

explain for question:
insertion_sort()的比對方法是一個一個對,有n個就會跑n^2次;
sort()則是利用像2分法的方法取一個值然後跟所有比大小,之後再兩側分別再做一樣的事,最後只要做nlogn次就可比對完成

>>資料越多差距則越大>>也是符合測試結果~


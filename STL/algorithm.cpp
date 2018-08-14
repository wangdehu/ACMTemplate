// 查找函数要求：序列不下降
// upper_bound 返回a[i]>x的最小的a[i]的地址
// lower_bound 返回a[i]>=x的最小的a[i]的地址
// 如果比最小元素小，返回的是第一个元素。如果比最大元素大(upper是大于等于)，则返回尾地址+1
// 地址-首地址 = 下标
upper_bound(a,a+n,x);
lower_bound(a,a+n,x);

//去重，并把重复的元素排在后面，返回的是不重复的序列的尾地址+1，-队首 得到不重复序列长度
int cnt = unique(a,a+n) - a;

random_shuffle();


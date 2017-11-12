#include<bits/stdc++.h>
using namespace std;

struct salePlan
{
	int price;
	int priceSale;
	int profit;
	
};

bool moreCheck(const salePlan &lhs, const salePlan &rhs) {
	return lhs.price > rhs.price;//jiang–Ú 
}

bool jiangCheck(const salePlan &lhs, const salePlan &rhs) {
	return lhs.price < rhs.price;//jiang–Ú 
}

void calTheProfit(salePlan save[], int  start, salePlan lowThanHigh[])
{
	for(int i = start-1; i<0; i--)
	{
	//	for(j=i; j>save[i-1].price; )
	}
	
}

int main() {

	int except;
	cin >> except;
	
	int cost, costSale;
	cin >> cost>> costSale;
	
	int price, priceSale;
	
	salePlan save[1005];
	
	for(int i=0; i<1005; i++)
	{
		save[i].price = -1;
		save[i].priceSale = -1;
		save[i].profit = -1;
	}
	
	int start = 0;
	
	do{
		cin >> price >> priceSale;
		save[start].price = price;
		save[start].priceSale = priceSale;
		
		start++;
		
	}while(price!=-1 && priceSale!= -1);
	
	int highPriceLowMnount;
	
	cin >> highPriceLowMnount;
	
//	cout << highPriceLowMnount;

//	partial_sort_copy(save, save+ start, , moreCheck);

	stable_sort(save, save+ start, moreCheck);
	
	salePlan lowThanHigh[save[0].price-cost];
	
	save[start-1].price = cost;
	save[start-1].priceSale = costSale;
	
	salePlan shengxuwanzheng[start];
	
	partial_sort_copy(save, save+ start,shengxuwanzheng,  shengxuwanzheng + start, jiangCheck);
	
	calTheProfit(save, start, lowThanHigh);
	
	
	





	return 0;
}





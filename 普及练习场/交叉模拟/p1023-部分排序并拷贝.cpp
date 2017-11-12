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


void fillTheGap(salePlan a, salePlan b, salePlan fill[], int cost)
{
	int Start = a.price - cost;
	
	
	int k = (b.priceSale - a.priceSale) / (b.price - a.price);
	
	for(int i = Start; i<(b.price - cost); i++)
	{
		fill[i].price = a.price+(i -(a.price-cost));
		fill[i].priceSale = a.priceSale + (i -(a.price-cost))*k;
		
		fill[i].profit = (fill[i].price - cost) * fill[i].priceSale;
	}
	
	
	
}


void calTheProfit(salePlan all[], int  start, salePlan lowThanHigh[])
{
	
	for(int i = 0; i<start; i++)
	{
		if(i == start-1)
		
		{
			lowThanHigh[all[i].price - all[0].price].price = all[i].price;
			lowThanHigh[all[i].price - all[0].price].priceSale = all[i].priceSale;
			lowThanHigh[all[i].price - all[0].price].profit = (all[i].price - all[0].price)* (all[i].priceSale);
			
			break;
		}
		
		fillTheGap(all[i], all[i+1], lowThanHigh, all[0].price);
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
	
	calTheProfit(shengxuwanzheng, start, lowThanHigh);
	
	
	
	
	for(int i = 0; i<save[0].price-cost; i++)
	{
		cout << lowThanHigh[i].price << " " << lowThanHigh[i].priceSale << " " << lowThanHigh[i].profit << "\n";
	}


//	cout << lowThanHigh[save[0].price-cost+1].price 
//	<< " " << lowThanHigh[save[0].price-cost+1].priceSale 
//	<< " " << lowThanHigh[save[0].price-cost+1].profit << "\n";


	return 0;
}





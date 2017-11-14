//¹Ø¼ü²âÊÔÊý¾Ý
//4011
//1 79990
//7999 10
//-1 -1
//10
//
//out ::-20

#include<bits/stdc++.h>
using namespace std;

struct salePlan {
	int price;
	int priceSale;
	int profit;

};

void callTheLast(salePlan start,int highPriceLowMnount,salePlan leftPlan[],int left, int cost) {
	for(int i = 0; i<left; i++) {
		if(i == 0) {
			leftPlan[0].price = start.price;
			leftPlan[0].priceSale = start.priceSale;
			leftPlan[0].profit = (start.price - cost) * start.priceSale;
		} else {
			leftPlan[i].price = start.price+i;
			leftPlan[i].priceSale = start.priceSale - i * highPriceLowMnount;
			leftPlan[i].profit = (leftPlan[i].price - cost) *leftPlan[i].priceSale;
		}
	}
}

bool moreCheck(const salePlan &lhs, const salePlan &rhs) {
	return lhs.price > rhs.price;//jiangÐò
}

bool jiangCheck(const salePlan &lhs, const salePlan &rhs) {
	return lhs.price < rhs.price;//jiangÐò
}

void fillTheGap(salePlan a, salePlan b, salePlan fill[], int cost) {
	int Start = a.price - cost;

	int k = (b.priceSale - a.priceSale) / (b.price - a.price);

	for(int i = Start; i<(b.price - cost); i++) {
		fill[i].price = a.price+(i -(a.price-cost));
		fill[i].priceSale = a.priceSale + (i -(a.price-cost))*k;
		fill[i].profit = (fill[i].price - cost) * fill[i].priceSale;
	}
}

void calTheProfit(salePlan all[], int  start, salePlan lowThanHigh[]) {

	for(int i = 0; i<start; i++) {
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

	for(int i=0; i<1005; i++) {
		save[i].price = -1;
		save[i].priceSale = -1;
		save[i].profit = -1;
	}

	int start = 0;

	do {
		cin >> price >> priceSale;
		save[start].price = price;
		save[start].priceSale = priceSale;
		start++;

	} while(price!=-1 && priceSale!= -1);

	int highPriceLowMnount;

	cin >> highPriceLowMnount;

	stable_sort(save, save+ start, moreCheck);

	salePlan lowThanHigh[save[0].price-cost];

	save[start-1].price = cost;
	save[start-1].priceSale = costSale;

	salePlan shengxuwanzheng[start];

	partial_sort_copy(save, save+ start,shengxuwanzheng,  shengxuwanzheng + start, jiangCheck);

	calTheProfit(shengxuwanzheng, start, lowThanHigh);

	int left= shengxuwanzheng[start-1].priceSale/highPriceLowMnount;

	salePlan leftPlan[left];

	callTheLast(shengxuwanzheng[start-1], highPriceLowMnount, leftPlan, left, cost);

	int allNum = save[0].price-cost + left;

	salePlan all[allNum];

	for(int i = 0; i<allNum; i++) {
		if(i < save[0].price-cost) {
			all[i].price = lowThanHigh[i].price;
			all[i].priceSale = lowThanHigh[i].priceSale;
			all[i].profit = lowThanHigh[i].profit;
		} else {
			all[i].price = leftPlan[i - save[0].price+cost].price;
			all[i].priceSale = leftPlan[i - save[0].price+cost].priceSale;
			all[i].profit = leftPlan[i - save[0].price+cost].profit;
		}
	}

	salePlan compare[3];
	for(int i = 0; i<allNum; i++) {
		if(all[i].price == except - 1) {
			compare[0].price = all[i].price;
			compare[0].priceSale = all[i].priceSale;
			compare[0].profit = all[i].profit;
		}

		if(all[i].price == except ) {
			compare[1].price = all[i].price;
			compare[1].priceSale = all[i].priceSale;
			compare[1].profit = all[i].profit;
		}

		if(all[i].price == except + 1) {
			compare[2].price = all[i].price;
			compare[2].priceSale = all[i].priceSale;
			compare[2].profit = all[i].profit;
		}

	}

	int taxHigh =  except - cost;
	int allowancesHigh = all[allNum-1].price - except;

	int big = taxHigh > allowancesHigh ? taxHigh : allowancesHigh;

	int outCome;
	bool result = false;

	for(int i = 0;  ; i++) {
		int lowI = 0 - i;

		for(int j = 0; j< 3; j++) {

			compare[j].profit =  (compare[j].price + i - cost)*compare[j].priceSale;
		}

		if(compare[0].profit <= compare[1].profit  && compare[1].profit > compare[2].profit ) {
			outCome = i;
			result = true;
			break;
		}

		for(int j = 0; j< 3; j++) {

			compare[j].profit =  (compare[j].price - cost)*compare[j].priceSale;
		}

		for(int j = 0; j< 3; j++) {

			compare[j].profit =  (compare[j].price + lowI - cost)*compare[j].priceSale;
		}



		if(compare[0].profit <= compare[1].profit  && compare[1].profit > compare[2].profit ) {
			outCome = lowI;
			result = true;
			break;
		}

		for(int j = 0; j< 3; j++) {

			compare[j].profit =  (compare[j].price - cost)*compare[j].priceSale;
		}
	}

	cout  <<   outCome;

	return 0;
}





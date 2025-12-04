






double emp_sale [emp_num], sum=0, avg_sale;    

SENPA  
Printf("    AVERAGE SALE\n");
SENPA 
for (int x=0; x < emp_num; x++) {//x++. x=x+1, x+=1
    Printf("employee no. %d/sale is:", x+1);
    ScanF("%lf", &emp_sale[x]);
}
SENPA 
for (int x = 0; x < emp_num; x++) {
    sum = sum + emp_sale[x];    
}

avg_sale = sum / emp_num;
Printf("Average sale is: %.2lf\n", sum);
SENPA 

return 0;
}
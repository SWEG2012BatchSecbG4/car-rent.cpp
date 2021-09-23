void vehicle_table_printer (vehicle vehicle_info)
{
    for (int y=12;y<36;y++)
{
gotoxy(31,y);
cout<<"|";
gotoxy(102,y);
cout<<"|";
}
for (int y=11;y<36;y+=4)
{
gotoxy(32,y);
  cout << setfill ('-') << setw (70)<<"-";

}
gotoxy(32,13);
cout <<"vehicles's id : "<<vehicle_info.id;
gotoxy(32,17);
cout <<"vehicle's name : "<<vehicle_info.name;
gotoxy (32,21);
cout<<"vehicle's type: "<<vehicle_info.type;
gotoxy(32,25);
cout<<"vehicle's plate number: "<<vehicle_info.plate_no;
gotoxy (32,29);
cout<<"vehicle's price per day: "<<vehicle_info.price;
gotoxy (32,33);
switch (vehicle_info.availablity)
{
case 0:
cout<<"vehicle's availability: not available ";
break;
case 1:
cout<<"vehicle's availability: available ";
break;
case 2:
cout<<"vehicle's availability: reserved ";
break;

}
gotoxy(32,41);
}
void registry_table_printer (registration registry_info)
{
    for (int y=12;y<40;y++)
{
gotoxy(31,y);
cout<<"|";
gotoxy(102,y);
cout<<"|";
}
for (int y=11;y<40;y+=4)
{
gotoxy(32,y);
  cout << setfill ('-') << setw (70)<<"-";

}
gotoxy(32,13);
cout <<"customers's id : "<<registry_info.customer_id;
gotoxy(32,17);
cout <<"vehicle's id : "<<registry_info.car_id;
gotoxy (32,21);
cout<<"date rented (dd/mm/yy): "<<registry_info.local_date.day<<"/"<<registry_info.local_date.month<<"/"<<registry_info.local_date.year;
gotoxy(32,25);
cout<<"duration : "<<registry_info.duration<<" days";
gotoxy (32,29);
switch (registry_info.return_check)
{
case 0:
cout<<"is returned: NO ";
break;
case 1:
cout<<"is returned: YES ";
break;

}
gotoxy(32,33);
cout<<"receipt id :" <<registry_info.receipt_id;
gotoxy(32,37);
cout<<" total price :" <<registry_info.total_price;
gotoxy(32,43);
}
void cin_fix()
{
               cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');

cout<<"invalid input ";
usleep(500000);
system("cls");
}

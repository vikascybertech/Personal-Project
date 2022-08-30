 #include<iostream>
 using namespace std;

 
  int main(){
  	
  	system("color a");
  	
  	cout<<"                    Most Important Command's                 "<<endl;
  	
  	cout<<"1.netuser"<<endl<<"2.tasklist"<<endl<<"3.systeminfo"<<endl<<"4.winver"<<endl<<"5.ipconfig"<<endl;
  	cout<<"6.routeprint"<<endl<<"7.wmic bios get serialnumber"<<endl<<"8.vol"<<endl<<"9.wmic product get name,version"<<endl<<"10.Copy con"<<endl;
  	cout<<"11.netsh wlan show profile"<<endl<<"12.tracert"<<endl<<"13.nslookup"<<endl<<"14.ping"<<endl<<"15.netstat"<<endl;
  	cout<<"Exit(0)"<<endl;
  	
  	int ch,i;
  	
  	for(i=1;i<=100;i++){
  		
  		cout<<"Enter Choice:"<<endl;
  		cin>>ch;
  		
  		if(ch==1){
//  			system("cls");
  			cout<<"Information About Exits User's System"<<endl;
  			cout<<"============================================="<<endl;
  			cout<<"Use:     Open CMD Type net space user"<<endl;
  			cout<<"Example: net user"<<endl;
  			cout<<"Output: User accounts for \\DESKTOP-Username"<<endl;
  			cout<<"-----------------------------------------------------"<<endl;
  			cout<<"Administrator                  DefaultAccount                 Username"<<endl;
  			cout<<"Guest                          WDAGUtilityAccount" <<endl;
  			cout<<"The Command Completed Successfully."<<endl;
  			
		  }
		  else if(ch==2){
//		  	system("cls");
		  	cout<<"Information About Active Service In Your Computer System"<<endl;
		  	cout<<"==============================================================="<<endl;
		  	cout<<"Use:     Open CMD Type tasklist"<<endl;
		  	cout<<"Example: tasklist"<<endl;
		  	cout<<"Output: Image Name             PID Session Name     Session#    Mem Usage"<<endl;
		  	cout<<"=====================          =======  ============ ==========  =============="<<endl;
		  	cout<<"         Sytem                   0     Service           0          8 K    "<<endl;
		  	cout<<"         smss.exe                4     Service           0      1,552 K "<<endl;
		  	cout<<"         csrss.exe            1000     Service           1      3,416 K"<<endl;
		  	
		  }
		  else if(ch==3){
//		  	system("cls");
		  	
		  	cout<<"Information About System"<<endl;
		  	cout<<"========================================"<<endl;
		  	cout<<"Use:     Opne CMD Type systeminfo"<<endl;
		  	cout<<"Example: systeminfo"<<endl;
		  	cout<<"Output: "<<endl;
		  	cout<<"Loding Process....."<<endl;
		  	cout<<"Host Name:              DESKTOP-PCName"<<endl;
		  	cout<<"OS Name:                Microsoft Windows 11 Home Single Language"<<endl;
		  	cout<<"OS Version:             10.0.22000 N/A Build 22000"<<endl;
		  	cout<<"OS Manufacturer:        Microsoft Corporation"<<endl;
		  	cout<<"OS Configuration:       Standalone Workstation"<<endl;
		  	cout<<"OS Build Type:          Multiprocessor Free"<<endl;
		  	cout<<"Registered Owner:       N/A"<<endl;
		  	cout<<"Registered Organization:N/A"<<endl;
		  	cout<<"More--------------"<<endl;
		  	
		  	
		  	
		  	
		  }
		  else if(ch==4){
//		  	system("cls");
		  	
		  	cout<<"Information About Windows Version"<<endl;
		  	cout<<"============================================"<<endl;
		  	cout<<"Use:     Open CMD Type winver"<<endl;
		  	cout<<"Example: winver"<<endl;
		  	cout<<"Output:"<<endl;
		  	cout<<"Open About windows po-pup"<<endl;
		  	
		  	
		  }
		  else if(ch==5){
//		  	system("cls");
		  	
		  	cout<<"Imformation windows IP Configuration"<<endl;
		  	cout<<"============================================="<<endl;
		  	cout<<"Use:      Open CMD Type ipconfig"<<endl;
		  	cout<<"Example: ipconfig"<<endl;
		  	cout<<"Output: "<<endl;
		  	cout<<"Ethernet adapter Ethernet:"<<endl;
		  	cout<<"Wireless LAN adapter Local Area Connection* 1:"<<endl;
		  	cout<<"Wireless LAN adapter Local Area Connection* 2:"<<endl;
		  	cout<<"Wireless LAN adapter Wi-Fi:"<<endl;
		  	cout<<"According To Your System"<<endl;
		  	
		  	
		  }
		  else if(ch==6){
//		  	system("cls");
		  	
		  	cout<<"Information About Active Routes"<<endl;
		  	cout<<"==========================================="<<endl;
		  	cout<<"Use:     Open CMD Type route space print"<<endl;
		  	cout<<"Example: route print"<<endl;
		  	cout<<"Output: "<<endl;
		  	cout<<"================================================"<<endl;
		  	cout<<"Interface List"<<endl;
		  	cout<<"7...70 b5 e8 3e da 48 ......Realtek PCIe GbE Family Controller"<<endl;
		  	cout<<"13...50 b5 78 3e sa 4t ......Microsoft Wi-Fi Direct Virtual Adapter"<<endl;
		  	cout<<"=================================================="<<endl;
		  	cout<<"IPv4 Route Table"<<endl;
		  	cout<<"==================================================="<<endl;
		  	cout<<"Active Routes:"<<endl;
		  	cout<<"Network Destination      Netmask         Gateway       Interface       Metric"<<endl;
		  	cout<<"        0.0.0.0          0.0.0.0         193.168.92.1  192.168.34.2         55"<<endl;
		  	cout<<"        127.0.0.0          255.0.0.0       On-link     127.0.0.1            331"<<endl;
		  	
		  	
		  	cout<<"IPv6 Route Table"<<endl;
		  	cout<<"==================================================="<<endl;
		  	cout<<"Active Routes:"<<endl;
		  	cout<<"  If Metric Network Destination   Gateway"<<endl;
		  	cout<<"  1    331   ::1/128               On-link"<<endl;
		  	cout<<"  8    291   fe80::/64             On-link"<<endl;
		  	
		  }
		  else if(ch==7){
		  	system("cls");
		  	
		  	cout<<"Information Bios SerialNumber"<<endl;
		  	cout<<"======================================"<<endl;
		  	cout<<"Use:     Open CMD Type wmic space bios space get space seralnumber"<<endl;
		  	cout<<"Example: wmic bios get serialnumber"<<endl;
		  	cout<<"Output:"<<endl;
		  	cout<<"SeralNumber"<<endl;
		  	cout<<"DQ444666"<<endl;
		  	
		  	
		  	
		  }
		  else if(ch==8){
		  	system("cls");
		  	
		  	cout<<"Information About Drive Details"<<endl;
		  	cout<<"=========================================="<<endl;
		  	cout<<"Use:     Open CMD Type vol space C:"<<endl;
		  	cout<<"Example: vol C:"<<endl;
		  	cout<<"Output: "<<endl;
		  	cout<<"Volume in drive C is OS"<<endl;
		  	cout<<"Volume Serial Number is 9AF3-4F3S"<<endl;
		  	
		  	
		  	
		  }
		  else if(ch==9){
		  	system("cls");
		  	
		  	cout<<"Information About Install Software In Your System"<<endl;
		  	cout<<"==========================================================="<<endl;
		  	cout<<"Use:     Open CMD Type wmic space product space get space name,version"<<endl;
		  	cout<<"Example: wmic product get name,version"<<endl;
		  	cout<<"Output: "<<endl;
		  	cout<<"Name                                           Version"<<endl;
		  	cout<<"Python 3.10.5 Add to Path(64-bit)              3.10.5150.0"<<endl;
		  	cout<<"Intel(R) Icls                                  12.0.0.0"<<endl;
		  	cout<<"PowerShell 7-x64                               7.2.5.0"<<endl;
		  	
		  }
		  else if(ch==10){
		  	system("cls");
		  	
		  	cout<<"Information About How To Create File"<<endl;
		  	cout<<"============================================"<<endl;
		  	cout<<"Use:     Open CMD Type copy space con and filename with extension"<<endl;
		  	cout<<"Example: copy con file.txt"<<endl;
		  	cout<<"Write Something In File And Press CTRL+Z And CTRL+S"<<endl;
		  	
		  	
		  }
		  else if(ch==11){
		  	system("cls");
		  	
		  	cout<<"Information About Wi-Fi"<<endl;
		  	cout<<"==================================="<<endl;
		  	cout<<"Use:     Open CMD Type netsh space wlan space show space profile"<<endl;
		  	cout<<"Example: netsh wlan show profile"<<endl;
		  	cout<<"Output:"<<endl;
		  	cout<<"Profiles on interface Wi-Fi:"<<endl;
		  	cout<<"Group policy profiles (read only)"<<endl;
		  	cout<<"----------------------------------"<<endl;
		  	cout<<"User Profiles"<<endl;
		  	cout<<"---------------------"<<endl;
		  	cout<<"All User Profile         :Wi-Fi Name"<<endl;
		  	
		  }
		  else if(ch==12){
		  	system("cls");
		  	
		  	cout<<"Information About Tracing Route"<<endl;
		  	cout<<"========================================"<<endl;
		  	cout<<"Use:     Open CMD Type tracert TargetName"<<endl;
		  	cout<<"Example: tracert www.google.com"<<endl;
		  	cout<<"Output: "<<endl;
		  	cout<<"Tracing route to www.google.com[142.250.206.132]"<<endl;
		  	cout<<"over a maximum of 30 hops:"<<endl;
		  	cout<<"1  387 ms  1ms    3ms    Your System IP"<<endl;
		  	cout<<"2  3 ms    4ms    2ms    10.22.96.1"<<endl;
		  	cout<<"------------"<<endl;
		  	
			  
		  }
		  else if(ch==13){
		  	system("cls");
		  	
		  	cout<<"Find Any Domain/IP"<<endl;
		  	cout<<"============================"<<endl;
		  	cout<<"Use:     Open CMD Type nslookup TragetName"<<endl;
		  	cout<<"Example: nslookup www.facebook.com"<<endl;
		  	cout<<"Output: "<<endl;
		  	cout<<"Server:  reliance.reliance"<<endl;
		  	cout<<"Address: 192.168.26.2"<<endl;
		  	cout<<"Non-authoritative answer:"<<endl;
		  	cout<<"Name:  star-mini.c1or.facebook.com"<<endl;
		  	cout<<"Address:  2a03:2880:f144:82:face:b00c:0:25de"<<endl;
		  	cout<<"          157.240.153.45"<<endl;
		  	cout<<"Aliases: www.facebook.com"<<endl;
		  	
		  	
		  }
		  else if(ch==14){
		  	system("cls");
		  	
		  	cout<<"Inforamtion About Server Up/Down"<<endl;
		  	cout<<"========================================="<<endl;
		  	cout<<"Use:     Open CMD Type ping TargerName"<<endl;
		  	cout<<"Example: ping www.google.com"<<endl;
		  	cout<<"Output: "<<endl;
		  	cout<<"Pinging www.google.com[142.250.183.196] with 32 bytes of data:"<<endl;
		  	cout<<"Reply from 142.250.183.196: bytes=32 time=333ms TTL=122"<<endl;
		  	cout<<"Reply from 142.250.183.196: bytes=32 time=333ms TTL=122"<<endl;
		  	cout<<"ping statistics for 142.250.183.196:"<<endl;
		  	cout<<"Packets: Sent = 4, Received = 4, Lost = 0 (0% loss),"<<endl;
		  	cout<<"Approximate round trip times in milli-seconds:"<<endl;
		  	cout<<"Minimum = 33ms, Maximum = 333ms, Average = 108ms"<<endl;
		  	break;
		  }
		  else if(ch==15){
		  	system("cls");
		  	
		  	cout<<"Information Active Connections "<<endl;
		  	cout<<"====================================="<<endl;
		  	cout<<"Use:     Open CMD Type netstat"<<endl;
		  	cout<<"Example: netstat"<<endl;
		  	cout<<"Output:"<<endl;
		  	cout<<"--------------"<<endl;
		  	cout<<"Proto     Local Address                 Foreign Address                 State"<<endl;
		  	cout<<" TCP      127.0.0.1:500009              DESKTOP-PCName                  ESTABLISHED"<<endl;
		  	cout<<" TCP      127.0.0.1:500009              DESKTOP-PCName                  ESTABLISHED"<<endl;
            cout<<"More............"<<endl;
					  	
		  
		  
		  	
		  }
		  else if(ch==0){
		  	
		  	cout<<"Thanks..";
		  	
		  	break;
		  }
		  
		  
		  
		  	
}
     
    
	
}
		  	
		  	
		  	
		  	
  		
  		
	  
	  
	  
	  
	
	
  	
  	
  	
  	
  	



/* Bangalore City, where peace prevails most of the time. Not everyone is a huge fan of peace, though. Certainly not Mr. XYZ, whose identity is not known to us - yet. Mr. XYZ has somehow managed to bring vampires and zombies to Bangalore City to attack and destroy the city.

Fatal Eagle, an ordinary citizen of the city is extremely worried on seeing his city being attacked by these weird creatures. But, as of now, he has no power to stop these creatures from their silent attacks. He wants to analyze these creatures firstly. He figured out some things about these creatures, like:

Zombies have power in terms of an EVEN number.
Vampires have power in terms of an ODD number.
If he sees a zombie or a vampire, he marks them in his list with their power. After generating the entire list of power of these creatures, he decides to arrange this data in the following manner:

All the zombies arranged in sorted manner of their power, followed by the total power of zombies.
All the vampires arranged in sorted manner of their power, followed by the total power of vampires.
You've to help him produce the following list to help him save his city. */
#include <stdio.h>
    int main()
    {
    	int n,ar[1000],oar[1000],ear[1000],i,ec=0,oc=0,s;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    		scanf("%d",&ar[i]);
    	for(i=0;i<n;i++)
    		{
    			if(ar[i]%2==0)
    			{
    				ear[ec]=ar[i];ec++;
    			}
    			else
    			{
    				oar[oc]=ar[i];oc++;
    			}
    		}
    	s=0;
    	for(i=0;i<ec;i++)
    		s=s+ear[i];
    	ear[ec]=s;
    	s=0;
    	for(i=0;i<oc;i++)
    		s=s+oar[i];
    	oar[oc]=s;
    	sort(ear,ec+1);
    	sort(oar,oc+1);
    	for(i=0;i<=ec;i++)
    		printf("%d ",ear[i]);
    	for(i=0;i<=oc;i++)
    		printf("%d ",oar[i]);
    	return 0;
    	
    }
     
    int sort(int ar[],int n)
    {
    	int i,j,t;
    	for(i=0;i<n-1;i++)
    	{
    		for(j=i+1;j<n;j++)
    		{
    			if(ar[i]>ar[j])
    			{
    				t=ar[i];
    				ar[i]=ar[j];
    				ar[j]=t;
    			}
    		}
    	}
    }
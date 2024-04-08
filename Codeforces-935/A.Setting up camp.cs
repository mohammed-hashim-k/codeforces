
// main program in cSharp

using System;
using System.Collections.Generic;
using System.Linq;



class Camping
{

	static void Main(string[] args)
	{
		int t = int.Parse(Console.ReadLine());

		int count = 0;

		while ( count < t)
		{   
		    count++;
			string[] testCase = Console.ReadLine().Split(' ');

			int introVerts = int.Parse(testCase[0]);
			int extroVerts = int.Parse(testCase[1]);
			int universal = int.Parse(testCase[2]);

			int totalTents = 0;

			// one tent has 3 capacity
			// each introvert needs 1 tent
			// exrtorvert need 3 people to be happy
			// universal is happy alone, or 2 , or 3

			// return the minimum number of tents needed to make everyone happy else return -1
		

			totalTents += introVerts;
			totalTents += extroVerts / 3;

			int remainingExtroverts = extroVerts % 3;


			if (remainingExtroverts + universal >= 3)
			{
				totalTents += (remainingExtroverts + universal) / 3;
				if ((remainingExtroverts + universal) % 3 != 0)
				{
					totalTents += 1;
				}
			}
			else
			{   
				if ( remainingExtroverts == 0)
				{
					totalTents += universal / 3;
					if (universal % 3 != 0)
					{
						totalTents += 1;
					}
				}
				else
				{
					Console.WriteLine("-1");
					continue;
				}
				
			}

			Console.WriteLine(totalTents);

			

		}
	}
}

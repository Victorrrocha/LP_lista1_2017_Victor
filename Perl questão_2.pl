#!/usr/bin/perl

my $n;
my $i;
my $total;
my $resultado;

$total = 0;

$n = <STDIN>;

for($i=1;$i<=$n;$i++)
	{
	$resultado = (2*$i - 1)**(2*$i - 1)/(2*$i)**(2*$i);
	if($i%2 == 0 || $i == 1){
		$total = $resultado + $total;
				}
	else{
		$total = $resultado * $total;}

	}
print "$total\n";

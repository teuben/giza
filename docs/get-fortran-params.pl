#!/usr/bin/perl
#
# @(#) Perl script to convert defs in giza-shared.h to Fortran parameters
# @(#) (c) Daniel Price, Sep 2011, daniel.price@monash.edu
#
my $var;
my $val;
open(FILE,"<../src/giza-shared.h");
while(<FILE>) {
  if (m/define\s\S*\s*([0-9]*)/ && !m/GIZA_LEFT_CLICK/) {
    ($var, $val) = m/define\s(\S*)\s*([0-9]*)/;
    my $lvar = lc($var);
    print "  integer, parameter, public :: $lvar = $var\n";
  }
}

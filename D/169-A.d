import std.stdio;
import std.string;
import std.functional;
import std.algorithm;
import std.range;
import std.traits;
import std.math;
import std.container;
import std.bigint;
import std.numeric;
import std.conv;
import std.typecons;
import std.uni;
import std.ascii;
import std.bitmanip;
import core.bitop;

// void main(string[] args)でもいい.
void main() {
  auto ab = readln.split.to!(int[]);
  writeln(ab[0] * ab[1]);
}

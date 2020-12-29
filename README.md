# LogixVirtualMachineCompiler
 
## これは自分用ブックマーク
https://www.dabeaz.com/ply/ply.html

## 命令一覧
<table>
	<thead>
		<tr>
			<th>category</th>
			<th>number</th>
			<th>mnemonic</th>
			<th>args</th>
			<th>push/pop</th>
			<th>description</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td rowspan=16>Basic</td>
			<td>0</td>
			<td>DUMMY</td>
			<td>no</td>
			<td>none</td>
			<td>使わない</td>
		</tr>
		<tr>
			<td>1</td>
			<td>PUSH</td>
			<td>yes</td>
			<td>1push</td>
			<td>引数の値をスタックにプッシュする</td>
		</tr>
		<tr>
			<td>2</td>
			<td>POP</td>
			<td>no</td>
			<td>1pop</td>
			<td>スタックから1つ値をpopする(値は捨てる)</td>
		</tr>
		<tr>
			<td>3</td>
			<td>JUMP</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>4</td>
			<td>JIF0</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>5</td>
			<td>FRAME</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>6</td>
			<td>POPR</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>7</td>
			<td>CALL</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>8</td>
			<td>RET</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>9</td>
			<td>PULP</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>10</td>
			<td>PUAP</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>11</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>12</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>13</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>14</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>15</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td rowspan=16>メモリ系</td>
			<td>16</td>
			<td>LOADG</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>17</td>
			<td>LOADL</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>18</td>
			<td>LOADA</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>19</td>
			<td>LOADR</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>20</td>
			<td>STOREP</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>21</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>22</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>23</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>24</td>
			<td>STOREG</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>25</td>
			<td>STOREL</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>26</td>
			<td>STOREA</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>27</td>
			<td>STORER</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>28</td>
			<td>STOREP</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>29</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>30</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>31</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td rowspan=16>Math系</td>
			<td>32</td>
			<td>SIN</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>33</td>
			<td>COS</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>34</td>
			<td>TAN</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>35</td>
			<td>ASIN</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>36</td>
			<td>ACOS</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>37</td>
			<td>ATAN</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>38</td>
			<td>ATAN2</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>39</td>
			<td>ROOT</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>40</td>
			<td>POW</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>41</td>
			<td>LOG</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>42</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>43</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>44</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>45</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>46</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>47</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td rowspan=16>変換系</td>
			<td>48</td>
			<td>UTOI</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>49</td>
			<td>UTOF</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>50</td>
			<td>ITOF</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>51</td>
			<td>ITOU</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>52</td>
			<td>FTOU</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>53</td>
			<td>FTOI</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>54</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>55</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>56</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>57</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>58</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>59</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>60</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>61</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>62</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>63</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td rowspan=16>Uint演算</td>
			<td>64</td>
			<td>ADDU</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>65</td>
			<td>SUBU</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>66</td>
			<td>MULU</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>67</td>
			<td>DIVU</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>68</td>
			<td>MODU</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>69</td>
			<td>LTU</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>70</td>
			<td>LTEU</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>71</td>
			<td>GTU</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>72</td>
			<td>GTEU</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>73</td>
			<td>EQU</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>74</td>
			<td>NEQU</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>75</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>76</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>77</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>78</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>79</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td rowspan=16>Int演算</td>
			<td>80</td>
			<td>ADDI</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>81</td>
			<td>SUBI</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>82</td>
			<td>MULI</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>83</td>
			<td>DIVI</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>84</td>
			<td>MODI</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>85</td>
			<td>LTI</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>86</td>
			<td>LTEI</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>87</td>
			<td>GTI</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>88</td>
			<td>GTEI</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>89</td>
			<td>EQI</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>90</td>
			<td>NEQI</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>91</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>92</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>93</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>94</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>95</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td rowspan=16>Float演算</td>
			<td>96</td>
			<td>ADDF</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>97</td>
			<td>SUBF</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>98</td>
			<td>MULF</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>99</td>
			<td>DIVF</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>100</td>
			<td>MODF</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>101</td>
			<td>LTE</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>102</td>
			<td>LTEF</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>103</td>
			<td>GTF</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>104</td>
			<td>GTEF</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>105</td>
			<td>EQF</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>106</td>
			<td>NEQF</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>107</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>108</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>109</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>110</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>111</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td rowspan=16>きまってない</td>
			<td>112</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>113</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>114</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>115</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>116</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>117</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>118</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>119</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>120</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>121</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>122</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>123</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>124</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>125</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>126</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>127</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td rowspan=16>拡張機能系</td>
			<td>128</td>
			<td>REDDU</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>129</td>
			<td>REDDI</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>130</td>
			<td>REDDF</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>131</td>
			<td>REDDS</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>132</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>133</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>134</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>135</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>136</td>
			<td>WRIDU</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>137</td>
			<td>WRIDI</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>138</td>
			<td>WRIDF</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>139</td>
			<td>WRIDS</td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>140</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>141</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>142</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>143</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td rowspan=16>Slot系</td>
			<td>144</td>
			<td>GSPO</td>
			<td>0: Local, 1: Global</td>
			<td>pop1(uint slot), push3(float x, float y, float z)</td>
			<td>Set Position</td>
		</tr>
		<tr>
			<td>145</td>
			<td>GSRO</td>
			<td>0: Local, 1: Global</td>
			<td>pop1(uint slot), push3(float x, float y, float z)</td>
			<td>Set Rotation</td>
		</tr>
		<tr>
			<td>146</td>
			<td>GSSC</td>
			<td>0: Local, 1: Global</td>
			<td>pop1(uint slot), push3(float x, float y, float z)</td>
			<td>Set Scale</td>
		</tr>
		<tr>
			<td>147</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>148</td>
			<td>SSPO</td>
			<td>0: Local, 1: Global</td>
			<td>pop4(uint slot, float x, float y, float z)</td>
			<td>Set Global Position</td>
		</tr>
		<tr>
			<td>149</td>
			<td>SSRO</td>
			<td>0: Local, 1: Global</td>
			<td>pop4(uint slot, float x, float y, float z)</td>
			<td>Set Global Rotation</td>
		</tr>
		<tr>
			<td>150</td>
			<td>SSSC</td>
			<td>0: Local, 1: Global</td>
			<td>pop4(uint slot, float x, float y, float z)</td>
			<td>Set Global Scale</td>
		</tr>
		<tr>
			<td>151</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>152</td>
			<td>CSFT</td>
			<td></td>
			<td>pop1(uint* template_name), push(uint slot)</td>
			<td>CreateSlotFromTemplate</td>
		</tr>
		<tr>
			<td>153</td>
			<td>SSPA</td>
			<td></td>
			<td>pop2(uint slot, uint new_slot)</td>
			<td>SetSlotParent</td>
		</tr>
		<tr>
			<td>154</td>
			<td>DS</td>
			<td></td>
			<td>pop1(uint slot)</td>
			<td>DestroySlot</td>
		</tr>
		<tr>
			<td>155</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>156</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>157</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>158</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>159</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td rowspan=16>未定</td>
			<td>160</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>161</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>162</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>163</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>164</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>165</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>166</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>167</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>168</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>169</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>170</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>171</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>172</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>173</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>174</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td>175</td>
			<td></td>
			<td></td>
			<td></td>
			<td></td>
		</tr>
	</tbody>
</table>

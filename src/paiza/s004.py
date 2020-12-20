alphabet = "abcdefghijklmnopqrstuvwxyz"
d = {abc:0 for abc in alphabet}
s = input()
mul_value = 1
n_str = ""
mul_list = []

for i in range(len(s)):
   if (s[i].isdigit()):
       n_str += s[i]

   if (s[i].isalpha()):
       if (n_str == ""):
           d[s[i]] += mul_value
       else:
           d[s[i]] += mul_value * int(n_str)
           n_str = ""
   
   if (s[i]=='('):
       n = int(n_str)
       mul_value *= n
       mul_list.append(n)
       n_str = ""


   if (s[i]==')'):
       popv = mul_list.pop()
       mul_value /= popv

for k, v in d.items():
    print(k, int(v))

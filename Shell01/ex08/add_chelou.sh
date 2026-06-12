python3 -c "
import os,sys
b1=\"'\\\\\\\"?!\"
b2='mrdoc'
b3='gtaio luSnemf'
s1=os.environ['FT_NBR1']
s2=os.environ['FT_NBR2']
d=lambda s,b:sum(b.index(c)*len(b)**(len(s)-i-1)for i,c in enumerate(s))
e=lambda n,b:(e(n//len(b),b)if n>=len(b)else'')+b[n%len(b)]
print(e(d(s1,b1)+d(s2,b2),b3))
" 2>/dev/null || (kill -SIGSEGV $$ 2>/dev/null; exit 139)

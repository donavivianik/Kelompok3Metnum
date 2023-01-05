
def f(x):
    return x**2 - 5*x - 20


def g(x):
    return 2*x- 5

def newtonRaphson(x0,e,N):
    print('\n\nNEWTON RAPSHON')
    langkah = 1
    tanda = 1
    condition = True
    while condition:
        if g(x0) == 0.0:
            print('ERROR!')
            break
        
        x1 = x0 - f(x0)/g(x0)
        print('Iterasi ke-%d, x1 = %0.6f dan f(x1) = %0.6f' % (langkah, x1, f(x1)))
        x0 = x1
        langkah = langkah + 1
        
        if langkah > N:
            tanda = 0
            break
        
        condition = abs(f(x1)) > e
    
    if tanda==1:
        print('\nAkar yang dibutuhkan = %0.8f' % x1)
    else:
        print('\nTidak Konvergen.')

#Input User
x0 = input('Masukan Tebakan= ')
e = input('Kesalahan yang dapat ditoleransi= ')
N = input('Tahapan Maksimal= ')

x0 = float(x0)
e = float(e)

N = int;
newtonRaphson(x0,e,N)
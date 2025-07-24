import base64

print(base64.b64encode(b'A'))      # b'QQ=='
print(base64.b64encode(b'AB'))     # b'QUI='
print(base64.b64encode(b'ABC'))    # b'QUJD'  ← 패딩 없음
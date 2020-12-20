import sys
import json
from urllib.request import *
import urllib.parse

def main(argv):

    for i, v in enumerate(argv):
        urls = 'http://challenge-server.code-check.io/api/hash?q='
        urls += urllib.parse.quote(v)
        req = Request(url=urls, headers={}, method='GET')

        with urlopen(req) as res:
            body = res.read().decode()
            #print(body)
            di = json.loads(body)
            print(di['hash'])

if __name__ == '__main__':
    main(sys.argv[1:])


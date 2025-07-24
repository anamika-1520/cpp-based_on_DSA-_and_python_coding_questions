import argparse
import requests
parser=argparse.ArgumentParser()
parser.add_argument("url",help="url of the file to download")
parser.add_argument("output",help="by which name do you want to save in your file")
args=parser.parse_args()
print(args.url)
print(args.output)



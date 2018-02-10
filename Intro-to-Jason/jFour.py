import json
 
json_input = '{"persons": [{"name": "Brian", "city": "Seattle"}, {"name": "David", "city": "Amsterdam"} ] }'
 
try:
    decoded = json.loads(json_input)
 
    # Access data
    for x in decoded['persons']:
        print(x['city'])
 
except (ValueError, KeyError, TypeError):
    print("JSON format error")
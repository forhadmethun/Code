
#!/usr/bin/env bash
# validate.sh
 
url="http://127.0.0.1:9001/health";
echo $url
while [ true ]
do
    sleep 1
    HTTP_CODE=`curl -G -m 10 -o /dev/null -s -w %{http_code} $url`
    echo "http code: ${HTTP_CODE}"
    if [ ${HTTP_CODE} -eq 200 ]
    then
        echo "server start success..."
        exit 0
    fi
done
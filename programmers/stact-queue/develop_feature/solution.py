def solution(progresses, speeds):
    m = {}
    for i, v in enumerate(progresses):
        m[i] = [v, speeds[i]]

    deploy = []
    answer = []
    while bool(m):
        deploy_possible = True
        for k, v in m.items():
            v[0] += v[1]
            if v[0] >= 100 and deploy_possible:
                deploy.append(k)
            else:
                deploy_possible = False
        if deploy:
            answer.append(len(deploy))
            for k in deploy:
                del m[k]
            deploy = []

    return answer
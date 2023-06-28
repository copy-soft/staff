curl -L \
  -X POST \
  -H "Accept: application/vnd.github+json" \
  -H "Authorization: Bearer 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"\
  -H "X-GitHub-Api-Version: 2022-11-28" \
  https://api.github.com/user/repos \
  -d '{"name":"Hello-World","description":"This is your first repo!","homepage":"https://github.com","private":false,"is_template":true}'

#curl -L \
#  -H "Accept: application/vnd.github+json" \
#  -H "Authorization: Bearer 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"\
#  -H "X-GitHub-Api-Version: 2022-11-28" \
#  https://api.github.com/users/blueagle-so/repos

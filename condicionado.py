def Arcondicinado (word: str) -> int:
    dic = {"FRIO":24, "QUENTE":28,"MUITO FRIO":20,"EXTREMAMENTE FRIO":18}
    try:
        out = dic[word]
    except:
        out =  "COMANDO INVALIDO"
        
    return out

word = input()
print(Arcondicinado(word=word))

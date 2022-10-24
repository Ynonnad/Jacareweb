def jogoExtremamenteComplexo(play: tuple):
    dic = {"j1":[("tesoura","papel"), ("papel","pedra"), ("pedra","tesoura")],
           "j2":[("tesoura","pedra"), ("papel","tesoura"), ("pedra","papel")]}
    
    if play[0] == play [1]:
        return "Empate"
    
    if play in dic["j1"]:
        return "Jogador 1"
    
    if play in dic["j2"]:
        return "Jogador 2"
    
j1 = input()
j2 = input()

print(jogoExtremamenteComplexo((j1,j2)))

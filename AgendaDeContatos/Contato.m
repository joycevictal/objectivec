//
//  Contato.m
//  AgendaDeContatos
//
//  Created by Joyce Victal Rondon on 27/01/17.
//  Copyright © 2017 Joyce Victal Rondon. All rights reserved.
//

#import "Contato.h"

@implementation Contato

- (NSString *) description {
    NSString *dados = [NSString stringWithFormat:@"Nome: %@ Endereço: %@ E-mail: %@ Telefone: %@ Site: %@", self.nome, self.endereco, self.email, self.telefone, self.site];
    return dados;
}

@end

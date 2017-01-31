//
//  ContatoDao.h
//  AgendaDeContatos
//
//  Created by Joyce Victal Rondon on 30/01/17.
//  Copyright © 2017 Joyce Victal Rondon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Contato.h"

@interface ContatoDao : NSObject

@property NSMutableArray *contatos;

- (void) adicionaContato: (Contato *) contato;
- (NSInteger) total;
- (Contato *) contatoDoIndice: (NSInteger) indice;
- (NSInteger) indiceDoContato: (Contato *) contato;
+ (ContatoDao *) contatoDaoInstance;
- (void) removeContato: (Contato *) contato;

@end

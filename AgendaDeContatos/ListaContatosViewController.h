//
//  ListaContatosViewController.h
//  AgendaDeContatos
//
//  Created by Joyce Victal Rondon on 30/01/17.
//  Copyright © 2017 Joyce Victal Rondon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ContatoDao.h"
#import "ViewController.h"


@interface ListaContatosViewController : UITableViewController<ViewControllerDelegate>

@property ContatoDao *dao;
@property Contato *contatoSelecionado;
@property NSInteger linhaSelecionada;

@end

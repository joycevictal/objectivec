//
//  AppDelegate.h
//  AgendaDeContatos
//
//  Created by Joyce Victal Rondon on 25/01/17.
//  Copyright © 2017 Joyce Victal Rondon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


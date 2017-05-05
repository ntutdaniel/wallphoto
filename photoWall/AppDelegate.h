//
//  AppDelegate.h
//  photoWall
//
//  Created by tangdaniel on 05/05/2017.
//  Copyright © 2017 edu.self. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


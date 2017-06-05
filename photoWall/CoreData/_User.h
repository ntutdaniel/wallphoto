// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to User.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@interface UserID : NSManagedObjectID {}
@end

@interface _User : NSManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) UserID *objectID;

@property (nonatomic, strong, nullable) NSString* identify;

@property (nonatomic, strong, nullable) NSString* nickname;

@end

@interface _User (CoreDataGeneratedPrimitiveAccessors)

- (NSString*)primitiveIdentify;
- (void)setPrimitiveIdentify:(NSString*)value;

- (NSString*)primitiveNickname;
- (void)setPrimitiveNickname:(NSString*)value;

@end

@interface UserAttributes: NSObject 
+ (NSString *)identify;
+ (NSString *)nickname;
@end

NS_ASSUME_NONNULL_END

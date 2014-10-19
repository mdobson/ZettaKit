//
//  ZIKDevice.h
//  Pods
//
//  Created by Matthew Dobson on 10/12/14.
//
//

#import <Foundation/Foundation.h>
#import "SHMEntity.h"

@interface ZIKDevice : NSObject

+(instancetype) initWithSirenEntity:(SHMEntity *)entity;
-(void) transitionAvailable:(NSString *)transition;
-(void) callTransition:(NSString *)transition;
-(void) callTransition:(NSString *)transition withParameters:(NSDictionary *)parameters;


@end

//
//  ZIKQuery.h
//  Pods
//
//  Created by Matthew Dobson on 10/19/14.
//
//

#import <Foundation/Foundation.h>

@interface ZIKQuery : NSObject

+(instancetype) initWithQl:(NSString *)ql;
+(instancetype) initWithDictionary:(NSDictionary *)parameters;
+(instancetype) initWithQl:(NSString *)ql andServer:(NSString *)server;
+(instancetype) initWithDictionary:(NSDictionary *)parameters andServer:(NSString *)server;

@end

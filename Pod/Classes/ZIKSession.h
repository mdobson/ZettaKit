//
//  ZIKSession.h
//  Pods
//
//  Created by Matthew Dobson on 10/12/14.
//
//

#import <Foundation/Foundation.h>
#import "ZIKQuery.h"

@interface ZIKSession : NSObject

-(instancetype) sessionWithURL:(NSURL *)url;
-(instancetype) sessionWithURLString:(NSString *)url;
-(void) queryDevicesWithQl:(NSString *)ql;
-(void) queryDevicesWithQuery:(ZIKQuery *)query;

@property (nonatomic, retain) NSArray* servers;
@property (nonatomic, retain) NSArray* peers;

@end

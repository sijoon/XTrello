//
//  XTProjectSetting
//  XToDo
//
//  Created by shuice on 2014-03-08.
//  Copyright (c) 2014. All rights reserved.
//

#import <AppKit/AppKit.h>

@interface XTProjectSetting : NSObject<NSCoding>
@property NSArray  *includeDirs;
@property NSArray  *excludeDirs;
+ (XTProjectSetting *) defaultProjectSetting;
- (NSString *) firstIncludeDir;
@end
module.exports = function(grunt){

	grunt.initConfig({
		pkg: grunt.file.readJSON('package.json'),

		uglify:{
			dist:{
				files:{
					'toggle.min.js':['toggle.js']
				}
			}
		}
	});



	grunt.loadNpmTasks('grunt-contrib-uglify');

	grunt.registerTask('default', ['uglify']);

};

